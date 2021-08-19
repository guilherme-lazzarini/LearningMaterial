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
public class Gerente extends Pessoa implements Funcionario{
    private float salario;
    private String area;

    public String getArea() {
        return area;
    }

    public void setArea(String area) {
        this.area = area;
    }

    @Override
    public void status() {
        System.out.println("Nome: " + super.getNome());
        System.out.println("Endereço: " + super.getEndereço());
        System.out.println("Teleone: " + super.getTelefone());
        System.out.println("Área: " + this.getArea());
        System.out.println("Salario: " + this.getSalario());
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
