'use strict'

{
  function update() {
  // document.querySelector('h1').textContent = 'Changed';
  document.getElementById('target').textContent = 'Changed';
  }

  setTimeout(update, 2000)
}