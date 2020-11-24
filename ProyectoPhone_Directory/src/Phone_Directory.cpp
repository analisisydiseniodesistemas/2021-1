#include "Phone_Directory.h"
/** Construir un directorio telef\'onico vacio*/
Phone_Directory::Phone_Directory()
{
    capacity = 5;
    the_directory = new Directory_Entry[capacity];
}

/** Cargar el archivo de datos que contiene el
    directorio, establecer una conexi\'on con
    la fuente de datos.
    @param source_name El nombre del archivo
                       (fuente de datos) con
                       las entradas/elementos del
                       directorio telef\'onico.
    La funci\'on para cargar el archivo de datos.
    pre: El almacenamiento del directorio se ha
         creado y se encuentra vac\'io. Si existe
         el archivo consistir\'a en pares
         name-number en l\'ineas adyacentes.
    post: Los datos a partir del archivo se
          cargan en el directorio.
    pre => post
*/
void load_data(const std::string& source_name)
{
  // Recordar el nombre de la fuente de datos
  // para utilizarlo al salvar
  this->source_name = source_name;
  // Crear una cadena de netrada para este archivo.
  ifstream in(source_name.c_str());
  if(in){
    string name;
    string number;
    while(getline(in,name)){
        if(getline(in,number)){
            add(name,number);
        }
    }
    // Cerrar el archivo
    in.close();
  }
}

/** Agregar una entrada o modificar una entrada
    existente.
@param name El nombre de la persona que est\'a
            siendo agregada o modificada
@param number El nuevo n\'umero a ser asignado
@return El antiguo n\'umero o, si es una nueva
        entrada, una cadena vacia
*/
std::string Phone_Directory::add_or_change_entry(
            const std::string& name,
            const std::string& number)
{
  std::string old_number = "";
  int index = find(name);
  if(index != -1){
    old_number=the_directory[index].get_number();
    the_directory[index].set_number(number);
  }else{
    add(name,number);
  }
  modified = true;
  return old_number;
}

/** Buscar una entrada.
@param name El nombre de la persona
@return El n\'umero, Si no se encuentra en el
        directorio, una cadena vac\'ia
*/
std::string Phone_Directory::lookup_entry(
            const std::string name) const{
  int index = find(name);
  if(index != -1){
    return the_directory[index].get_number();
  }else{
    return "";
  }
}

/** Funci\'on para guardar el directorio.
pre: el directorio ha sido cargado con datos
post: el archivo de datos tiene nuevamente el
      directorio actualizado bajo la forma
      nombre-numero en l\'ineas adyacentes.
      modified se vuelve a colocar en false.
*/
void Phone_Directory::save(){
 if(modified){ // If not modified, do nothing
  //Crear una cadena de salida.
  ofstream out(source_name.c_str());
  for(int i=0;i<size; i++){
   out<<the_directory[i].get_name()<<std::endl;
   out<<the_directory[i].get_number()<<std::endl;
  }
  //Cerrar la cadena de salida.
  out.close();
  modified=false;
 }
}

/** Buscar el conjunto para un nombre determinado.
@param name El nombre a ser encontrado
@return El \'indice de la entrada que contiene
        este nombre o -1, en caso de que el
        nombre no est\'e presente
*/
int Phone_Directory::find(const string& name)const
{

}
