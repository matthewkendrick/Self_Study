'use strict';

$(() => {
  $('button').keydown(() => {
    $('<li>')
      .text($('input').val())
      .appendTo('ul');
    $('input')
      .val('')
      .focus();
  });
});