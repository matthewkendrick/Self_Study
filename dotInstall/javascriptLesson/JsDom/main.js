'use strict'

{
  document.querySelector('button').addEventListener('click', () => {
    const targetNode = document.getElementById('target');
    targetNode.textContent = 'Changed!';
    targetNode.title = 'I am title!';

    // targetNode.classList.add('my_color')
    // if (targetNode.classList.contains('my_color') == true) {
    //   targetNode.classList.remove('my_color');
    // } else {
    //   targetNode.classList.add('my_color')
    // }

    targetNode.classList.toggle('my_color')

  });
}