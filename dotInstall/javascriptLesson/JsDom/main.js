'use strict'

{
  document.querySelector('button').addEventListener('click', () => {
    const item1 = document.querySelectorAll('li')[1];

    // item1.remove();
    document.querySelector('ul').removeChild(item1);
  });
}