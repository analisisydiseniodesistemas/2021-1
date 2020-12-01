
/**
 * Write a description of class App here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class App
{   
    public static void mostrar_impl_00()  throws IOException
    {
        mostrar_archivo("..\\main0.cpp");
    }
    
    public static void mostrar_impl_01()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v01\\main1.cpp");
    }
    
    public static void mostrar_impl_02()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v02\\main2.cpp");
    }
    
    public static void mostrar_impl_03()  throws IOException
    {
        mostrar_archivo("..\\..\\ClaseEmployeeHerencia_v03\\main3.cpp");
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
    private Employee e1;
}