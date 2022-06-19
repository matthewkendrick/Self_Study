'use strict';

(() => {
  {
    class ClockDrawer {
      constructor(canvas) {
        this.ctx = canvas.getContext('2d');
        this.width = canvas.width;
        this.height = canvas.height;
      }
      
    }
    class Clock {
      constructor(drawer) {
        this.r = 100;
        this.drawer = drawer;
      }

      drawFace() {

        for (let angle = 0; angle < 360; angle += 6) {
          ctx.save();

          ctx.translate(width / 2, height / 2);
          ctx.rotate(Math.PI / 180 * angle);

          ctx.beginPath();
          ctx.moveTo(0, -this.r);
          if (angle % 30 == 0) {
            ctx.lineWidth = 2;
            ctx.lineTo(0, -this.r + 10);
            ctx.font = '16px bold Arial';
            ctx.textAlign = 'center';
            ctx.fillText(angle / 30 || 12, 0, -this.r - 10);
          } else {
            ctx.lineTo(0, -this.r + 5);
          }
          ctx.lineTo(0, -this.r + 5);
          ctx.stroke();

          ctx.restore();
        }
      }

      run() {
        this.drawFace();
      }
    }

    const canvas = document.querySelector('canvas');
    if (typeof canvas.getContext == 'undefined') {
      return;
    }

    const clock = new Clock(new ClockDrawer(canvas));
    clock.run();
  }
})();