#ifndef ATENDERCPU_H_
#define ATENDERCPU_H_

#include "m_gestor.h"
#include "paginacion.h"

// *************** DECLARACIÓN DE FUNCIONES **********
//**************** PETICIÓN INSTRUCCIÓN **************
void cpu_pide_instruccion(t_buffer* un_buffer);
t_proceso* obtener_proceso_por_id(int pid);
char* obtener_instruccion_por_indice(t_list* instrucciones, int indice_instruccion);
void enviar_una_instruccion_a_cpu(char* instruccion);

//**************** ACCESO ESPACIO USUARIO ************
void cpu_pide_numero_de_marco(t_buffer* un_buffer);
int obtener_marco_segun_pagina (int pid, int nro_pag);

//******************* RESIZE ************************
void cpu_pide_resize(t_buffer* un_buffer);
void enviar_out_of_memory_a_cpu();

#endif