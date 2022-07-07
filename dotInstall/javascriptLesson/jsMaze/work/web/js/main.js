'use strict';

(() => {
  class Maze {
    constructor(canvas) {
      this.ctx = canvas.getContext('2d');
      this.data = [
        [1, 1, 1, 1, 1],
        [1, 0, 0, 0, 1],
        [1, 0, 1, 0, 1],
        [1, 0, 1, 0, 1],
        [1, 1, 1, 1, 1],
      ];
    }
    
    render() {
      for (let row = 0; row < 5; row++) {
        for (let col = 0; col < 5; col++) {
          index
        }
      }
    }
  }
  const canvas = document.querySelector('canvas');
  if (typeof canvas.getContext === 'undefined') {
    return;
  }

  const maze = new Maze(canvas);
  maze.render();
})();