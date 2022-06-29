<?php

  require('../app/functions.php');

  $message = trim(filter_input(INPUT_GET, 'message'));
  $message = $message !== '' ? $message : '...';

  $colorFromGet = filter_input(INPUT_GET, 'color') ?? 'transparent';
  setcookie('color', $colorFromGet);

  $sex = filter_input(INPUT_GET, 'sex');
  $sex = filter_input(INPUT_GET, 'sex') ?? 'Not selected';

  $username = trim( filter_input(INPUT_GET, 'username') );
  $username = $username !== '' ? $username : '...';

  include('../app/_parts/_header.php');

  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>

    <div class="result">
      <p><?= nl2br(h($message)); ?><//p>
      <p><?= nl2br(h($sex)); ?><//p>
      <p><?= nl2br(h($colorFromGet)); ?></p>
      <p> by <?= h($username); ?></p>
      <p class="back-btn"><a href="index.php">back</a></p>
    </div>
  </section>


<?php 

include('../app/_parts/_footer.php');