<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Form</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <form action="#" method="POST" class="registration-form">
            <h2>Registration Form</h2>
            <div class="form-group">
                <input type="text" name="firstname" placeholder="First Name" required>
            </div>
            <div class="form-group">
                <input type="text" name="lastname" placeholder="Last Name" required>
            </div>
            <div class="form-group">
                <input type="email" name="email" placeholder="Email" required>
            </div>
            <div class="form-group">
                <input type="password" name="password" placeholder="Password" required>
            </div>
            <div class="form-group">
                <button type="submit">Sign Up</button>
            </div>
        </form>
    </div>
</body>
</html>
