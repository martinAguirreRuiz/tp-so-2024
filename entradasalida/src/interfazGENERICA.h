#ifndef INTERFAZGENERICA_H_
#define INTERFAZGENERICA_H_

#include "io_gestor.h"

void recibir_operacion_generica_de_kernel(InterfazGenerica* interfaz_generica, op_code codigo);
void iniciar_config_generica(Interfaz *configuracion);
void leer_configuracion_generica(Interfaz *configuracion);
int recibir_unidades_trabajo(int socket);
void realizar_sleep(int tiempo);
void liberar_configuracion_generica(Interfaz* configuracion);

#endif