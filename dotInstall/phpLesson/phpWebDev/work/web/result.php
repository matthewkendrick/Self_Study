<?php

  require('../app/functions.php');
  include('../app/_parts/_header.php');

  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>

    <p><?= h($message); ?></p>
    <p><a href="index.php">back</a></p>

    <form action="result.php" method="get">
      <input type="text" name="message" id="">
      <button>Send</button>
    </form>
  </section>


<?php 

include('../app/_parts/_footer.php');