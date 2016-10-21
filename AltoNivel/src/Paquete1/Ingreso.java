/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Paquete1;
/**
 *
 * @author Jordy Gonzalez
 */
import Paquete2.Atributos;

class Paciente{
	public String nombre;
        public Atributos atributo;
        
	Paciente(String nom){
            this.nombre=nom;
            this.atributo=new Atributos();
	}
        
        void SetPeso(int var){
            this.atributo.SetPeso(var);
        }
        int GetPeso(){
            return this.atributo.GetPeso();
        }
        
        void imprimirNombre(){
            System.out.println(this.nombre);
        }
}


class Ingreso{  
    
	public static void main(String[] args){
            Paciente p = new Paciente("Alex");
            p.SetPeso(100);
            p.imprimirNombre(); 
            System.out.println(p.GetPeso());
	}
}