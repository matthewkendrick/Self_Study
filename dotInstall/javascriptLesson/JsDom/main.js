'use strict'

{
  const text = document.querySelector('textarea');

  // focus and blur
  // text.addEventListener('focus', () => {
  //   console.log('focus');
  // });

  // text.addEventListener('blur', () => {
  //   console.log('blur');
  // });

  // input and change
  text.addEventListener('input', () => {
    console.log(text.value.length);
  });

  text.addEventListener('change', () => {
    console.log('change');
  });
}