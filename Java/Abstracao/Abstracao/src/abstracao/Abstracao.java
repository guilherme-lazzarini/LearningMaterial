/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package abstracao;

/**
 *
 * @author spetr
 */
public class Abstracao {

    /**
     * @param args the command line arguments
     */
    
    public static float atualizaSalario(Funcionario f)
    {
        float salario;
        
        if(f instanceof Colaborador)
        {
            salario = f.getSalario()*1.3f;
        }
        else
        {
            salario = f.getSalario()*1.2f;
        }
        
        return salario;
    }
    
    
    public static void main(String[] args) {
        // TODO code application logic here
        
       Cliente c = new Cliente();
       c.setCPF("111.111.111-11");
       c.setNome("João");
       c.setEndereço("Rua X");
       c.setTelefone("(11) 99999-9999");
       c.status();
       
       Colaborador c1 = new Colaborador();
       c1.setNome("Pedro");
       c1.setEndereço("Rua Z");
       c1.setTelefone("(11) 99999-9988");
       c1.setSalario(3000);
       c1.setSalario(atualizaSalario(c1));
       c1.status();
       
       Gerente g = new Gerente();
       g.setNome("Maria");
       g.setEndereço("Rua Y");
       g.setTelefone("(11) 99999-9977");
       g.setSalario(8000);
       g.setSalario(atualizaSalario(g));
       g.setArea("TI");
       g.status();
       
        
    }
    
}
