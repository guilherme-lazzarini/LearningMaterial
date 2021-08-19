/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package futebol20200916;

import java.util.Scanner;

/**
 *
 * @author spetr
 */
public class Jogador {
    private String nome;
    private int numero;
    private String posicao;

    public Jogador(String nome, int numero) {
        this.nome = nome;
        this.numero = numero;
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getPosicao() {
        return posicao;
    }

    public void setPosicao() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Escolha a posição tática: [1] goleiro [2] zagueiro [3] lateral [4] meia [5] atacante: ");
        int pos = sc.nextInt();
        switch(pos)
        {
            case 1:
                this.posicao = "goleiro";
                break;
            case 2:
                this.posicao = "zagueiro";
                break;
            case 3:
                this.posicao = "lateral";
                break;
            case 4:
                this.posicao = "meia";
                break;
            case 5:
                this.posicao = "atacante";
                break;
        }
    }
    
    public void status()
    {
        System.out.println("Nome: " + this.nome);
        System.out.println("Número: " + this.numero);
        System.out.println("Posição: " + this.posicao);
    }
    
    
}
