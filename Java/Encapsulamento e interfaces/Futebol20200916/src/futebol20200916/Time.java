/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package futebol20200916;

/**
 *
 * @author spetr
 */
public class Time implements Escalacao {
    private final Jogador[] jogadores;

    public Time() {
        jogadores = new Jogador[11];
    }
        
    @Override
    public void indicar(int indice, String nome, int numero) {
        Jogador j = new Jogador(nome, numero);
        j.setPosicao();
        jogadores[indice] = j;
        
    }

    @Override
    public void visualizar() {
        System.out.println("Nossos atletas: ");
        for(int i=0; i<11; i++)
        {
            if(jogadores[i] != null)
            {
                jogadores[i].status();
                System.out.println("-------------------------");
            }
            
        }
        
    }
    
    
}
