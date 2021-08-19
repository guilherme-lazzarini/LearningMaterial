/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projetocliente20200902;
import java.util.*;

/**
 *
 * @author spetr
 */
public class ProjetoCliente20200902 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ArrayList<Cliente> listaClientes = new ArrayList();
        Scanner sc = new Scanner(System.in);
        Cliente c = new Cliente();
        System.out.println("Digite o código do cliente: ");
        c.setCodigo(sc.nextInt());
       
        while(c.getCodigo()!=0)
        { 
            sc.nextLine();
            System.out.println("Digite o nome do cliente: ");
            c.setNome(sc.nextLine());
            System.out.println("Digite o cpf do cliente: ");
            c.setCpf(sc.nextLine());
            listaClientes.add(c);
            c = new Cliente();
            System.out.println("Digite o código do cliente: ");
            c.setCodigo(sc.nextInt());
        }
        
        sc.close();
        
        Iterator<Cliente> it = listaClientes.iterator();
        while(it.hasNext())
        {
           c = it.next();
           System.out.println("Codigo: " + c.getCodigo());
           System.out.println("Nome: " + c.getNome());
           System.out.println("CPF: " + c.getCpf());
           System.out.println("Pais: " + c.getPais());
           System.out.println("--------------------");
        }
        
        
        
        
        
        
    
        
    }
    
}
