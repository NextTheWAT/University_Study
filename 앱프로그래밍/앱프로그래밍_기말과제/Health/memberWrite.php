<?php
$host = 'localhost';
$user = 'jh4161126';
$pw = '1234';
$dbName = 'test';
$mysqli = new mysqli($host, $user, $pw, $dbName);

$id = $_POST['id'];
$pw = $_POST['pw'];
$email = $_POST['email'];

// 중복 데이터 확인
$checkQuery = "SELECT * FROM health_member WHERE id = '$id'";
$result = $mysqli->query($checkQuery);

if ($result->num_rows > 0) {
    echo '<script>alert("중복된 아이디입니다.")</script>';
    echo '<script>location.href = "register.html";</script>';
} else {
    // 삽입 쿼리 실행
    $insertQuery = "INSERT INTO health_member (id, pw, email) VALUES ('$id', '$pw', '$email')";

    if ($mysqli->query($insertQuery)) {
        echo '<script>alert("회원가입이 성공적으로 완료되었습니다.")</script>';
        echo '<script>location.href = "login.html";</script>';
    } else {
        echo '<script>alert("회원가입에 실패했습니다.")</script>';
        echo '<script>location.href = "register.html";</script>';
    }
}

mysqli_close($mysqli);
?>
