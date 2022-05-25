'use strict';

function process() {
  document.getElementById('target').textContent = 'すっごく真面目です';
  document.getElementById('trigger').classList.add('changed');
}

document.getElementById('trigger').addEventListener('click', process);