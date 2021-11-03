-- MySQL dump 10.13  Distrib 8.0.23, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: evernote
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `assinatura`
--

DROP TABLE IF EXISTS `assinatura`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `assinatura` (
  `idassinatura` int NOT NULL AUTO_INCREMENT,
  `plano` int DEFAULT NULL,
  `valor` float DEFAULT NULL,
  `desconto` float DEFAULT NULL,
  `data_assinatura` datetime DEFAULT NULL,
  `ass_idcartaocredito` int NOT NULL,
  PRIMARY KEY (`idassinatura`),
  KEY `idcartaocredito_idx` (`ass_idcartaocredito`),
  CONSTRAINT `ass_idcartaocredito` FOREIGN KEY (`ass_idcartaocredito`) REFERENCES `cartaocredito` (`car_idusuario`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `assinatura`
--

LOCK TABLES `assinatura` WRITE;
/*!40000 ALTER TABLE `assinatura` DISABLE KEYS */;
INSERT INTO `assinatura` VALUES (1,1,300,NULL,'2021-11-01 22:12:13',1),(2,2,345,NULL,'2021-11-01 22:12:13',2),(3,1,333,NULL,'2021-11-01 22:12:13',3),(4,2,345,NULL,'2021-11-01 22:12:13',4);
/*!40000 ALTER TABLE `assinatura` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `caderno`
--

DROP TABLE IF EXISTS `caderno`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `caderno` (
  `idcaderno` int NOT NULL AUTO_INCREMENT,
  `nome` varchar(50) DEFAULT NULL,
  `cad_idusuario` int NOT NULL,
  PRIMARY KEY (`idcaderno`),
  KEY `idusuario_idx` (`cad_idusuario`),
  CONSTRAINT `cad_idusuario` FOREIGN KEY (`cad_idusuario`) REFERENCES `usuario` (`idusuario`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `caderno`
--

LOCK TABLES `caderno` WRITE;
/*!40000 ALTER TABLE `caderno` DISABLE KEYS */;
INSERT INTO `caderno` VALUES (1,'Trabalho',1),(2,'Projetos',1),(3,'Compras',1),(4,'Hábitos',2),(5,'Projetos',2),(6,'Atividades',3),(7,'Prontuário Médico',3),(8,'Controle Financeiro',3);
/*!40000 ALTER TABLE `caderno` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cartaocredito`
--

DROP TABLE IF EXISTS `cartaocredito`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cartaocredito` (
  `idcartaocredito` int NOT NULL AUTO_INCREMENT,
  `numero` varchar(20) DEFAULT NULL,
  `nome_no_cartao` varchar(200) DEFAULT NULL,
  `mes_vencimento` int DEFAULT NULL,
  `ano_vencimento` int DEFAULT NULL,
  `cvv` int DEFAULT NULL,
  `car_idusuario` int NOT NULL,
  PRIMARY KEY (`idcartaocredito`),
  KEY `idusuario_idx` (`car_idusuario`),
  CONSTRAINT `car_idusuario` FOREIGN KEY (`car_idusuario`) REFERENCES `usuario` (`idusuario`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cartaocredito`
--

LOCK TABLES `cartaocredito` WRITE;
/*!40000 ALTER TABLE `cartaocredito` DISABLE KEYS */;
INSERT INTO `cartaocredito` VALUES (1,'5265342615366197','João Silva',3,2020,345,1),(2,'5491114033354329','Ana M Fernandes',4,2021,435,2),(3,'5443763963546798','Kaio B Norberto',3,2022,354,3),(4,'5588311619605462','Mara Andrade',12,2021,434,4);
/*!40000 ALTER TABLE `cartaocredito` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `categoria`
--

DROP TABLE IF EXISTS `categoria`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `categoria` (
  `idcategoria` int NOT NULL AUTO_INCREMENT,
  `nome` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idcategoria`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `categoria`
--

LOCK TABLES `categoria` WRITE;
/*!40000 ALTER TABLE `categoria` DISABLE KEYS */;
INSERT INTO `categoria` VALUES (1,'Tarefa'),(2,'Lista'),(3,'Resumo'),(4,'Texto'),(5,'Página'),(6,'Tabela');
/*!40000 ALTER TABLE `categoria` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `lembrete`
--

DROP TABLE IF EXISTS `lembrete`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `lembrete` (
  `idlembrete` int NOT NULL AUTO_INCREMENT,
  `nome` varchar(200) DEFAULT NULL,
  `descricao` text,
  `data_criacao` datetime DEFAULT NULL,
  `data_alarme` datetime DEFAULT NULL,
  `lem_idusuario` int NOT NULL,
  PRIMARY KEY (`idlembrete`),
  KEY `idusuario_idx` (`lem_idusuario`),
  CONSTRAINT `lem_idusuario` FOREIGN KEY (`lem_idusuario`) REFERENCES `usuario` (`idusuario`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `lembrete`
--

LOCK TABLES `lembrete` WRITE;
/*!40000 ALTER TABLE `lembrete` DISABLE KEYS */;
INSERT INTO `lembrete` VALUES (1,'Tomar água','Você deve tomar pelo menos 2 litros de água todos os dias','2021-11-01 22:12:13','2021-11-02 07:00:00',1),(2,'Comprar produtos de limpeza','Ir ao mercado comprar amaciante, desinfetante e sabão em pó','2021-10-27 07:35:34','2021-10-29 08:00:00',1),(3,'Pagar as contas','Retirar dinheiro no caixa eletrônico','2021-11-01 17:23:43','2021-11-05 08:00:00',2),(4,'Aniversário da Cláudia','Lembrar de comprar o presente','2021-11-01 13:45:12','2021-12-02 08:00:00',2);
/*!40000 ALTER TABLE `lembrete` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `nota`
--

DROP TABLE IF EXISTS `nota`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `nota` (
  `idnota` int NOT NULL,
  `titulo` varchar(45) DEFAULT NULL,
  `texto` text,
  `data` datetime DEFAULT NULL,
  `not_idcaderno` int NOT NULL,
  PRIMARY KEY (`idnota`),
  KEY `idcaderno_idx` (`not_idcaderno`),
  CONSTRAINT `not_idcaderno` FOREIGN KEY (`not_idcaderno`) REFERENCES `caderno` (`idcaderno`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `nota`
--

LOCK TABLES `nota` WRITE;
/*!40000 ALTER TABLE `nota` DISABLE KEYS */;
INSERT INTO `nota` VALUES (1,'Reunião E-commerce','Resumo da reunião','2021-11-01 07:00:00',1),(2,'Lista de tarefas','Lista de coisas a afazer','2021-11-01 07:00:00',1),(3,'Ferramentas online','Lista de ferramentas para utilizar','2021-11-01 07:00:00',1),(4,'Mudança de emprego','Tabela com possíveis empresas','2021-11-01 07:00:00',5),(5,'Novos hábitos','Lista de hábitos a serem adotados','2021-11-01 07:00:00',5),(6,'Chacklist de revisão','Lista de itens de revisão','2021-11-01 07:00:00',6),(7,'Check Up 2019','Página para recuperação dos exames','2019-11-01 07:00:00',7),(8,'Check Up 2020','Página para recuperação dos exames','2020-11-01 07:00:00',7),(9,'Check Up 2021','Página para recuperação dos exames','2021-11-01 07:00:00',7);
/*!40000 ALTER TABLE `nota` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `nota_categoria`
--

DROP TABLE IF EXISTS `nota_categoria`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `nota_categoria` (
  `idnota_categoria` int NOT NULL AUTO_INCREMENT,
  `not_cat_idcategoria` int NOT NULL,
  `not_cat_idnota` int NOT NULL,
  PRIMARY KEY (`idnota_categoria`),
  KEY `idcategoria_idx` (`not_cat_idcategoria`),
  KEY `idnota_idx` (`not_cat_idnota`),
  CONSTRAINT `idcategoria` FOREIGN KEY (`not_cat_idcategoria`) REFERENCES `categoria` (`idcategoria`),
  CONSTRAINT `idnota` FOREIGN KEY (`not_cat_idnota`) REFERENCES `nota` (`idnota`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `nota_categoria`
--

LOCK TABLES `nota_categoria` WRITE;
/*!40000 ALTER TABLE `nota_categoria` DISABLE KEYS */;
INSERT INTO `nota_categoria` VALUES (1,3,1),(2,2,2),(3,2,3),(4,6,4),(5,2,5),(6,2,6),(7,5,7),(8,5,8),(9,5,9);
/*!40000 ALTER TABLE `nota_categoria` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `notificacao`
--

DROP TABLE IF EXISTS `notificacao`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `notificacao` (
  `idnotificacao` int NOT NULL,
  `texto` varchar(500) DEFAULT NULL,
  `data_criacao` datetime DEFAULT NULL,
  `data_leitura` datetime DEFAULT NULL,
  `not_idusuario` int NOT NULL,
  PRIMARY KEY (`idnotificacao`),
  KEY `idusuario_idx` (`not_idusuario`),
  CONSTRAINT `not_idusuario` FOREIGN KEY (`not_idusuario`) REFERENCES `usuario` (`idusuario`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `notificacao`
--

LOCK TABLES `notificacao` WRITE;
/*!40000 ALTER TABLE `notificacao` DISABLE KEYS */;
INSERT INTO `notificacao` VALUES (1,'Você precisa atualizar seus dados','2021-11-01 07:00:00',NULL,1),(2,'Atualização dos termos de serviço','2021-11-01 07:00:00',NULL,1),(3,'Atualização dos termos de serviço','2021-11-01 07:00:00',NULL,2),(4,'Atualização dos termos de serviço','2021-11-01 07:00:00',NULL,3),(5,'Atualização dos termos de serviço','2021-11-01 07:00:00',NULL,4),(6,'Acesso suspeito, recomendamos a troca de senha','2021-10-01 07:00:00','2021-10-02 08:00:00',2);
/*!40000 ALTER TABLE `notificacao` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `usuario`
--

DROP TABLE IF EXISTS `usuario`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `usuario` (
  `idusuario` int NOT NULL AUTO_INCREMENT,
  `nome` varchar(200) DEFAULT NULL,
  `email` varchar(200) DEFAULT NULL,
  `senha` varchar(100) DEFAULT NULL,
  `telefone` varchar(13) DEFAULT NULL,
  `cpf` varchar(11) DEFAULT NULL,
  `data_nascimento` date DEFAULT NULL,
  `tipo_usu` int DEFAULT NULL,
  PRIMARY KEY (`idusuario`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `usuario`
--

LOCK TABLES `usuario` WRITE;
/*!40000 ALTER TABLE `usuario` DISABLE KEYS */;
INSERT INTO `usuario` VALUES (1,'João Silva','joao.silva@hotmail.com','12345','5549988776655','01411187628','1990-07-06',1),(2,'Ana Maria Fernandes','ana.maria@gmail.com','12345','5549988776655','34511187628','1963-05-22',1),(3,'Kaio Braga Norberto','kaio.norberto@live.com','12345','5549988774433','19711187628','1988-02-15',2),(4,'Mara Andrade','mara.andrade@gmail.com','12345','5547988776655','26011187628','1976-12-27',2);
/*!40000 ALTER TABLE `usuario` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-11-03  7:41:56
