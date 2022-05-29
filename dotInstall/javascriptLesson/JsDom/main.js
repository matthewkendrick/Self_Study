'use strict'

{
  function update() {
    document.querySelectorAll('p')[0].textContent = 'Changed';
    document.querySelectorAll('p').forEach((p, index) => {
      p.textContent = `${index}番目のpです！`;
    });
  }

  setTimeout(update, 2000)
}