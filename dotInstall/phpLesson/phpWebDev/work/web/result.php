<?php

  require('../app/functions.php');

  $message = filter_input(INPUT_GET, 'message');
  $username = filter_input(INPUT_GET, 'username');

  include('../app/_parts/_header.php');

  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>

    <div class="result">
      <p><?= h($message); ?></p>
      <p><?= h($message); ?> by <?= h($username); ?></p>
      <p class="back-btn"><a href="index.php">back</a></p>
    </div>
  </section>


<?php 

include('../app/_parts/_footer.php');