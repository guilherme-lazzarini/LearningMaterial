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
public class Colaborador extends Pessoa implements Funcionario{
    private float salario;
    
    @Override
    public void status() {
        System.out.println("Nome: " + super.getNome());
        System.out.println("Endereço: " + super.getEndereço());
        System.out.println("Telefone: " + super.getTelefone());
        System.out.println("Salário: " + this.salario);
    }

    @Override
    public void setSalario(float salario) {
        this.salario = salario;
    }

    @Override
    public float getSalario() {
        return this.salario;
    }
    
}
