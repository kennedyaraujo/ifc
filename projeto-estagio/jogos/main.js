fetch('jogos.json')
  .then(results => results.json())
  .then(data => {
    var games = []
    for (var i = 0; i < data.length; i++) {
      games.push(data[i])
    }
    games.sort(function (a, b) {
      if (a.jogo > b.jogo) {
        return 1
      }
      if (a.jogo < b.jogo) {
        return -1
      }
      return 0
    })
    for (const game of games) {
      constroyCards(game)
    }
  })

function constroyCards(game) {
  var col = document.createElement('div')
  var card = document.createElement('div')
  var name = document.createElement('h2')
  var numberOfPlayers = document.createElement('p')
  var time = document.createElement('p')
  var autor = document.createElement('p')

  name.textContent = game['jogo']
  numberOfPlayers.innerHTML = `${game['jogadores'].join([
    (separator = '-')
  ])} <i class="bi-people"></i>`
  time.innerHTML = `${game['tempo']}MIN <i class="bi-clock"></i>`
  autor.textContent = `${game['autor']}`
  const nameId = name.textContent.replace(/ |!/g, '')

  col.classList.add('col')

  setAttributes(card, {
    class: 'card btn btn-primary',
    'data-bs-toggle': 'modal',
    'data-bs-target': `#${nameId}`
  })

  card.appendChild(name)
  card.appendChild(numberOfPlayers)
  card.appendChild(time)
  card.appendChild(autor)
  col.appendChild(card)

  createModal(nameId)

  infoJogo = game['info']
  // Criação da descrição de cada jogo
  slides(infoJogo, nameId)

  var cards = document.getElementById('card-group')
  cards.appendChild(col)
}

function createModal(modalId) {
  var main = document.getElementById('main')
  var modal = document.createElement('div')
  var modalDialog = document.createElement('div')
  var modalContent = document.createElement('div')
  var modalHeader = document.createElement('div')
  var modalBody = document.createElement('div')
  var modalFooter = document.createElement('div')
  var modalTitle = document.createElement('h2')
  var buttonCloseHeader = document.createElement('button')
  var buttonCloseFooter = document.createElement('button')

  // Attributes
  setAttributes(modal, {
    class: 'modal fade',
    'data-bs-backdrop': 'static',
    'data-bs-keyboard': 'false',
    tabindex: '-1',
    'aria-labelledby': 'staticBackdropLabel',
    'aria-hidden': 'true',
    id: modalId
  })

  setAttributes(modalDialog, {
    class: 'modal-dialog modal-fullscreen'
  })

  setAttributes(modalContent, {
    class: 'modal-content'
  })

  setAttributes(modalHeader, {
    class: 'modal-header'
  })

  setAttributes(modalBody, {
    class: 'modal-body',
    id: `conteudo-${modalId}`
  })

  setAttributes(modalFooter, {
    class: 'modal-footer',
    content: 'Fechar'
  })

  setAttributes(modalTitle, {
    class: 'modal-title',
    id: 'staticBackdropLabel'
  })
  modalTitle.textContent = modalId

  setAttributes(buttonCloseHeader, {
    type: 'button',
    class: 'btn-close',
    'data-bs-dismiss': 'modal',
    'aria-label': 'close'
  })

  setAttributes(buttonCloseFooter, {
    type: 'button',
    class: 'btn btn-secondary',
    'data-bs-dismiss': 'modal'
  })
  buttonCloseFooter.textContent = 'Fechar'

  modal.appendChild(modalDialog)
  modalDialog.appendChild(modalContent)
  modalContent.appendChild(modalHeader)
  modalContent.appendChild(modalBody)
  modalContent.appendChild(modalFooter)
  modalHeader.appendChild(modalTitle)
  modalHeader.appendChild(buttonCloseHeader)
  modalFooter.appendChild(buttonCloseFooter)
  main.appendChild(modal)
}

function slides(info, id) {
  var container = document.getElementById(`conteudo-${id}`)
  var carousel = document.createElement('div')
  var carouselInner = document.createElement('div')
  var buttonPrev = document.createElement('button')
  var buttonPrevIcon = document.createElement('span')
  var buttonPrevLeg = document.createElement('span')
  var buttonNext = document.createElement('button')
  var buttonNextIcon = document.createElement('span')
  var buttonNextLeg = document.createElement('span')

  setAttributes(carousel, {
    id: `conteudo-${id}-conteudo`,
    class: 'carousel slide h-100',
    'data-bs-ride': 'carousel',
    'data-bs-interval': 'false'
  })

  setAttributes(carouselInner, {
    class: 'carousel-inner'
  })

  setAttributes(buttonPrev, {
    class: 'carousel-control-prev',
    type: 'button',
    'data-bs-slide': 'prev',
    'data-bs-target': `#conteudo-${id}-conteudo`
  })

  setAttributes(buttonPrevIcon, {
    class: 'carousel-control-prev-icon',
    'aria-hidden': 'true'
  })

  setAttributes(buttonPrevLeg, {
    class: 'visually-hidden'
  })

  setAttributes(buttonNext, {
    class: 'carousel-control-next',
    type: 'button',
    'data-bs-slide': 'next',
    'data-bs-target': `#conteudo-${id}-conteudo`
  })

  setAttributes(buttonNextIcon, {
    class: 'carousel-control-next-icon',
    'aria-hidden': 'true'
  })

  setAttributes(buttonNextLeg, {
    class: 'visually-hidden'
  })

  primeiro = 1

  for (const element of info) {
    var carouselItem = document.createElement('div')
    var title = document.createElement('h2')

    title.innerHTML = element['titulo']
    carouselItem.appendChild(title)

    if (primeiro == 1) {
      setAttributes(carouselItem, {
        class: 'carousel-item active'
      })
    } else {
      setAttributes(carouselItem, {
        class: 'carousel-item'
      })
    }

    for (const textot of element['texto']) {
      const text = document.createElement('p')

      var texto = textot.replace(/\*\*\w|\*\*\?/gi, function (string) {
        return '<strong>' + string[2]
      })

      texto = texto.replace(/[A-Z]\*\*|\)\*\*|\?\*\*/gi, function (string) {
        console.log(arguments)
        return string[0] + '</strong>'
      })

      texto = texto.replace(/[A-Z]<strong>/gi, '</strong>')

      text.innerHTML = texto
      carouselItem.appendChild(text)
    }

    primeiro = 0

    carouselInner.appendChild(carouselItem)
  }

  carousel.appendChild(carouselInner)
  carousel.appendChild(buttonPrev)
  carousel.appendChild(buttonNext)
  buttonPrev.appendChild(buttonPrevIcon)
  buttonPrev.appendChild(buttonPrevLeg)
  buttonNext.appendChild(buttonNextIcon)
  buttonNext.appendChild(buttonNextLeg)
  container.appendChild(carousel)
}

function setAttributes(el, attributes) {
  for (var key in attributes) {
    el.setAttribute(key, attributes[key])
  }
}
