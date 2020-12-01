
/**
 * Write a description of class Employee here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Employee
{
    public static void mostrar_header_00()  throws IOException
    {
        mostrar_archivo("..\\employee.h");
    }
    
    public static void mostrar_impl_00()  throws IOException
    {
        mostrar_archivo("..\\employee.cpp");
    }
    
    public static void mostrar_header_01()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v01\\employee.h");
    }
    
    public static void mostrar_impl_01()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v01\\employee.cpp");
    }
    
    public static void mostrar_header_02()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v02\\employee.h");
    }
    
    public static void mostrar_impl_02()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v02\\employee.cpp");
    }
    
    public static void mostrar_header_03()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v03\\employee.h");
    }
    
    public static void mostrar_impl_03()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v03\\employee.cpp");
    }
    public static void mostrar_archivo(String archivo) throws IOException
    {
        // 1a Se lee un archivo linea a linea
        BufferedReader in = new BufferedReader(new
                FileReader(archivo));
        String s, s2 = new String();
        while((s = in.readLine()) != null) {
            s2 += s + "\n" ;
        }
        in.close();
        System.out.println(s2);
    }
}
