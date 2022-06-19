'use strict';

(() => {
  class Icon {
    constructor(canvas) {
      this.ctx = canvas.getContext('2d');
      this.width = canvas.width;
      this.height = canvas.height;
      this.r = 30;
    }
    draw() {
      this.ctx.beginPath();
      this.ctx.arc(this.width / 2, this.height / 2, this.r, 0, 2 * Math.PI);
      this.ctx.stroke();
    }

    run() {
      this.draw();
    }
  }

  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }

  const icon = new Icon(canvas);
  icon.run();
})();
