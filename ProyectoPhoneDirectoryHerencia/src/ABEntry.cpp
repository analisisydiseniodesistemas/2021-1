#include "ABEntry.h"
/** Constructor por defecto */
ABEntry::ABEntry()
:Directory_Entry(),elDomicilio(""),
num_TimesConsulted(0)
{ }/** cuerpo del constructor, vac\'io */

ABEntry::ABEntry(const std::string& nombre,
          const std::string& numero,
          const std::string& domicilio)
:Directory_Entry(nombre,numero),
elDomicilio(domicilio),num_TimesConsulted(0)
{ }
