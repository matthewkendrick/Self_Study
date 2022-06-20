'use strict';

$(() => {
  const $input = $('input');
  $input.focus();
  $('button').keydown(() => {
    $('<li>')
      .text($input.val())
      .appendTo('ul');
    $input
      .val('')
      .focus();
  });
});