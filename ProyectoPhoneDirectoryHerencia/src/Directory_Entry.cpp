#include "Directory_Entry.h"

Directory_Entry::Directory_Entry()
:name(""),number("") /** inicializaciones */
{
  //name = "";   /** asignaci\'on */
  //number = ""; /** asignaci\'on */
}

Directory_Entry::Directory_Entry(
          std::string nombre,std::string numero)
:name(nombre),number(numero)
{
  //this->name=name;
  //this->number=number;
}

std::string Directory_Entry::get_name(){
  return name;
}

std::string Directory_Entry::get_number(){
  return number;
}

void Directory_Entry::set_name(std::string name){
  this->name=name;
}

void Directory_Entry::set_number(
                      std::string number){
  this->number=number;
}
