'use strict';

{
  class Panel {
    constructor() {
      this.el = document.createElement('li');
      this.el.classList.add('pressed');
    }

    getEl() {
      return this.el;
    }

    activate(num) {
      this.el.classList.remove('pressed');
      this.el.textContent = num;
    }
  }

  class Board {
    constructor() {
      this.panels = [];
      for (let i = 0; i < 4; i++) {
        this.panels.push(new Panel());
      }
      this.setup();
    }
    setup() {
      const board = document.getElementById('board');
      this.panels.forEach(panel => {
        board.appendChild(panel.getEl());
      });
    }

    activate() {
      this.panels.forEach(panel => {
        panel.activate(0);
      });
    }
  }

  const board = new Board();

  const btn = document.getElementById('btn');
  btn.addEventListener('click', () => {
    board.activate();
  });
}