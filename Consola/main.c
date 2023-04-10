#include<stdio.h>
#include<stdlib.h>
#include<commons/log.h>
#include<commons/string.h>
#include<commons/config.h>
#include<readline/readline.h>
#include "utils.c"

int main(void)
{


	int conexion;
	char* ip;
	char* puerto;
	char* valor;
	char* path = "/home/utnso/tp0/tp0.log";
	char* nombre_proceso = "log_tp0";
	char* valor_consola;


	t_log* logger;
	t_config* config;


	logger = iniciar_logger();
	logger = log_create(path, nombre_proceso, true, LOG_LEVEL_INFO);

    conexion = crear_conexion(ip, puerto);
    terminar_programa(conexion, logger, config);
    }
