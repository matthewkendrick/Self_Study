<?php

  require('../app/functions.php');
  include('../app/_parts/_header.php');

  $today = date('Y-m-d H:i:s l');

?>

  <section>
    <div class="text">
      <p><?= $today ?></p><br>
    </div>
  </section>

<?php 

include('../app/_parts/_footer.php');