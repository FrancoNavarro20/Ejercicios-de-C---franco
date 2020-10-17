/** \brief es una funcion que te permite validad el sexo si es mascumino y femenino que el tipo de dato char (m o f);
 *
 * \param Valida el sexo si es masculino o femenino
 *
 * \return devuelve el sexo validado 1 si es verdadero o 0 si es falso
 *
 */

int validarSexo(char sexo);


/** \brief es una funcion que te pide el sexo al usuario
 *
 * \param texto error es para cuando se valida te ingrese en forma de mensaje cual fue el error.
 *
 * \return devuelve el sexo para ser validado si esta bien el sexo ingresado;
 *
 */

char pedirSexo(char textoError []);
