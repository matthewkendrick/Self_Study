'use strict';

(() => {
  class Ball {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
      this.x = 30;
      this.y = 30;
      this.r = 10;
    }
    
    update() {
    }
    
    draw() {
      this.ctx.beginPath();
      this.ctx.fillStyle = '#DC3545';
      this.ctx.arc(this.x, this.y, this.r, 0, 2 * Math.PI);
      this.ctx.fill();
    }
  }
  class Game {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
      this.ball = new Ball(this.canvas);
      this.loop();
    }

    
    loop() {
      this.update();
      this.draw();

      requestAnimationFrame(() => {
        this.loop();
      });
    }
  
    update() {
      this.ball.update();
    }  

    draw() {
      this.ball.draw();
    }
  }
  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }

  new Game(canvas);
})();