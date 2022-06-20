'use strict';

$(() => {
  $('button').click(() => {
    $('p')
      .text('おはよう！')
      .addClass('red-text');
  });
});