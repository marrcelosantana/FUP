#include "xpaint.h"

int main(){
    int largura = 600, altura = 500;
    /* cria um bitmap de 600x600 */
    x_open(largura, altura); 
    /* escreve usando a font default na posicao x=50, y=30 */
    /* utilizando o mesmo formato do printf */
    x_write(50, 30, "SIMPLE HOUSE");
    
    
    /* muda a cor do pincel para vermelho */
    
    xs_color(CYAN);
    xd_filled_rect(100, 250, 500, 550);
    xs_color(RED);
    xd_filled_rect(120, 350, 180, 550);
    xs_color(RED);
    xd_filled_rect(300, 350, 360, 400);
    xs_color(RED);
    xd_filled_rect(400, 350, 460, 400);
    xs_color(WHITE);
    xd_filled_circle(170, 430, 5);
    xs_color(WHITE);
    xd_filled_rect(320, 350, 340, 400);
    xs_color(WHITE);
    xd_filled_rect(420, 350, 440, 400);
    xs_color(RED);
    xd_filled_triangle(100, 250, 300, 250, 200, 100);
    xs_color(RED);
    xd_filled_rect(200, 250, 500, 175);
    xs_color(GREEN);
    xd_filled_rect(200, 480, 500, 550);
    xs_color(ORANGE);
    xd_filled_rect(200, 495, 500, 550);
    xs_color(WHITE);
    xd_filled_rect(100, 260, 500, 250);
    xs_color(WHITE);
    xd_filled_ellipse(300, 50, 400, 100);
    xs_color(WHITE);
    xd_filled_ellipse(370, 50, 470, 100);
    xs_color(WHITE);
    xd_filled_ellipse(450, 50, 550, 100);
    xs_color(ORANGE);
    xd_thick_line(50, 500, 40, 500, 200);
    xs_color(BLACK);
    x_write(140, 320, "71");
    xs_color(GREEN);
    xd_filled_ellipse(7, 340, 85, 400);
    
    
  
  
    /* desenha um circulo preenchido com centro no meio da tela e raio 200 */
    
    
   
    
   
    /* salva no arquivo exemplo.png */
    x_save("figura_base");
    /* libera os recursos alocados */
    x_close();
    return 0;
}