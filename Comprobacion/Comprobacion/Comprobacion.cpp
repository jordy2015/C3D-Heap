#include "stdafx.h"
int 	t0	;
int 	t1	;
int 	t2	;
int 	t3	;
int 	t4	;
int 	t5	;
int 	t6	;
int 	t7	;
int 	t8	;
int 	t9	;
int 	t10	;
int 	t11	;
int 	t12	;
int 	t13	;
int 	t14	;
int 	t15	;
int 	t16	;
int 	t17	;
int 	t18	;
int 	t19	;
int 	t20	;
int 	t21	;
int 	t22	;
int 	t23	;
int 	t24	;
int 	t25	;
int 	t26	;
int 	t27	;
int 	t28	;
int 	t29	;
int 	t30	;
int 	t31	;
int 	t32	;
int 	t33	;
int 	t34	;
int 	t35	;
int 	t36	;
int 	t37	;
int 	t38	;
int 	t39	;
int 	t40	;
int 	t41	;
int 	t42	;
int 	t43	;
int 	t44	;
int 	t45	;
int 	t46	;
int 	t47	;
int 	t48	;
int 	t49	;
int 	t50	;
int 	t51	;
int 	t52	;
int 	t53	;
int 	t54	;
int 	t55	;
int 	t56	;
int 	t57	;
int 	t58	;
int 	t59	;
int 	t60	;

int stack[1000];
int heap[1000];
int p=0;
int h=0;



void Atributos_SetPeso_(){
	//valor de la variable x
	t0=p+1;
	t1=stack[t0];

	//this.
	t2=p+0;
	t3=stack[t2];

	//posicion del atributo "peso"
	t4=t3+0;
	heap[t4]=t1;
}


void Atributos_GetPeso_(){
	//this.
	t5=p+0;
	t6=stack[t5];

	//acceso al atributo "peso" en el heap
	t7=t6+0;
	t8=heap[t7];

	//return
	t9=p+1;
	stack[t9]=t8;
}


//Construcotor de la clase paciente
void Paciente__Paciente_(){
	//1era referencia del contenido de nom
	t10=p+1;
	t11=stack[t10];

	//2da referencia del contenido de nom
	t12=heap[t11];
	t13=h;//t13 es lo que sintetizo
	t14=t13;
	L1:
		t15=heap[t12];
		if (t15==0)goto L2;
			goto L3;
		L3:
			heap[t14]=t15;
			h=h+1;
			t12=t12+1;
			t14=t14+1;
			goto L1;
		L2:
			heap[t14]=0;
			h=h+1;

	//this.
	t16=p+0;
	t17=stack[t16];

	//acceso al atributo "nombre" en el heap
	t18=t17+0;
	heap[t18]=t13;


	//new Atributos()
	t19=h;
	h=h+1;

	//this.
	t20=p+0;
	t21=stack[t20];

	//acceso al atrubito "atributo" en el heap
	t22=t21+1;
	heap[t22]=t19;
}

void Paciente_SetPeso_(){
	//acceso al valor de var
	t23=p+1;
	t24=stack[t23];

	//this.
	t25=p+0;
	t26=stack[t25];

	//acceso al atributo "atributo" en el heap
	t27=t26+1;
	t28=heap[t27];

	//llamada a .SetPeso
	p=p+2;
	t29=p+0;
	stack[t29]=t28;

	t30=p+1;
	stack[t30]=t24;

	Atributos_SetPeso_();
	p=p-2;
}

void Paciente_GetPaso_int_(){
	//this.
	t31=p+0;
	t32=stack[t31];

	//acceso al atributo "atributo" en el heap
	t33=t32+1;
	t34=heap[t33];

	//llamada a .GetPeso();
	p=p+2;
	t35=p+0;
	stack[t35]=t34;
	Atributos_GetPeso_();
	t36=p+1;
	t37=stack[t36];
	p=p-2;

	//return
	t38=p+1;
	stack[t38]=t37;
}

void Paciente_imprimirNombre_(){
	//this.
	//cadena 1er acceso
	t39=p+0;
	t40=stack[t39];

	//Acceso al atributo "nombre"
	//cadena 2do acceso
	t41=t40+0;
	t42=heap[t41];

	L1:
		t43=heap[t42];
		if (t43==0)goto L2;
		goto L3;
		L3:
			printf("%c",t43);
			t42=t42+1;
			goto L1;
L2:
			printf("\n");
}

void main(){
	// new Paciente("Alex");
	t43=h;
	h=h+2;

	//llamada a su constructor
	p=p+2;
		t44=p+0;
		stack[t44]=t43;

		//cadena 1era referencia
		t45=p+1;
		stack[t45]=h;

		//cadena 2da referencia
		t46=h;
		h=h+1;
		heap[t46]=h;

		t47=h;
		heap[t47]=65;
		h=h+1;
		t47=h;
		heap[t47]=108;
		h=h+1;
		t47=h;
		heap[t47]=101;
		h=h+1;		
		t47=h;
		heap[t47]=120;
		h=h+1;
		t47=h;
		heap[t47]=0;
		h=h+1;

		Paciente__Paciente_();
	p=p-2;
	//Paciente p
	t48=p+1;
	stack[t48]=t43;

	//p.SetPeso(100);
	t49=p+1;
	t50=stack[t49];
	p=p+2;
		t51=p+0;
		stack[t51]=t50;

		t52=p+1;
		stack[t52]=100;
		Paciente_SetPeso_();
	p=p-2;

	//p.imprimirNombre();
	t53=p+1;
	t54=stack[t53];
	p=p+2;
		t55=p+0;
		stack[t55]=t54;
		Paciente_imprimirNombre_();
	p=p-2;

	//p.GetPeso()
	t56=p+1;
	t57=stack[t56];
	p=p+2;
		t58=p+0;
		stack[t58]=t57;
		Paciente_GetPaso_int_();
		t59=p+1;
		t60=stack[t59];
	p=p-2;

	// System.out.println(p.GetPeso());
	printf("%d\n",t60);
}


