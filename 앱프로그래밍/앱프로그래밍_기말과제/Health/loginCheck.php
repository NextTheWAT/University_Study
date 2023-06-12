<?php

$host = 'localhost';
$user = 'jh4161126';
$pw = '1234';
$dbName = 'test';
$con = new mysqli($host, $user, $pw, $dbName);

$id = isset($_POST['id']) ? $_POST['id'] : '';
$pw = isset($_POST['pw']) ? $_POST['pw'] : '';

if (empty($id) && empty($pw)) { // id와 pw가 모두 입력되지 않은 경우
    echo "<script> alert('아이디와 패스워드를 모두 입력해주세요.'); </script>";
    echo "<script> location.href = 'login.html'; </script>";
} elseif (empty($id)) { // id가 입력되지 않은 경우
    echo "<script> alert('아이디를 입력해주세요.'); </script>";
    echo "<script> location.href = 'login.html'; </script>";
} elseif (empty($pw)) { // pw가 입력되지 않은 경우
    echo "<script> alert('패스워드를 입력해주세요.'); </script>";
    echo "<script> location.href = 'login.html'; </script>";
} else {
    $query = "SELECT * FROM health_member WHERE id='$id' AND pw='$pw'";

    $result = mysqli_query($con, $query);
    $row = mysqli_fetch_array($result);

    if ($row && $id == $row['id'] && $pw == $row['pw']) { // id와 pw가 맞다면 login
        echo "<script> alert('로그인 성공'); </script>";
        echo "<script> location.href = 'index_login.html'; </script>";
    } else { // id 또는 pw가 다르다면 admin_login 폼으로
        echo "<script> alert('로그인 실패'); </script>";
        echo "<script> location.href = 'login.html'; </script>";
    }
}

?>