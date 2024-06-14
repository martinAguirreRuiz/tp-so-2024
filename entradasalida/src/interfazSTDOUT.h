#ifndef INTERFAZSTDOUT_H_ 
#define INTERFAZSTDOUT_H_

#include "io_gestor.h"

void leer_configuracion_stdout(Interfaz *configuracion);
void iniciar_config_stdout(Interfaz *configuracion);
void liberar_configuracion_stdout(Interfaz* configuracion);
void recibir_operacion_stdout_de_kernel(Interfaz* configuracion_stdout, op_code codigo); 
void ejecutar_instruccion_stdout(Interfaz* configuracion_stdout, int direccion_logica, int tamano);

#endif