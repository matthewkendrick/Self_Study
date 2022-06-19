'use strict';

{
  class Clock {
    drawFace() {
      const canvas = document.querySelector('canvas');
      if (typeof canvas.getContext == 'undefined') {
        return;
      }
      const ctx = canvas.getContext('2d');

      const width = canvas.width;
      const height = canvas.height;
    }

    run() {
      this.drawFace();
    }
  }

  const clock = new Clock();
  clock.run();
}