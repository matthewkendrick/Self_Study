'use strict';

(() => {
  class Game {
    constructor(canvas) {
      this.canvas = canvas;
      this.ctx = this.canvas.getContext('2d');
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
    }  

    draw() {
      console.log(new Date());
    }
  }
  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }

  new Game(canvas);
})();