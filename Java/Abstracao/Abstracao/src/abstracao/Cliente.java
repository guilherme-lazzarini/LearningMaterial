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
public class Cliente extends Pessoa{
    
    private String CPF;

    public String getCPF() {
        return CPF;
    }

    public void setCPF(String CPF) {
        this.CPF = CPF;
    }
    
    @Override
    public void status() {
        System.out.println("CPF: " + this.CPF);
        System.out.println("Nome: " + super.getNome());
        System.out.println("Endereço: " + super.getEndereço());
        System.out.println("Telefone: " + super.getTelefone());
    }
    
}
