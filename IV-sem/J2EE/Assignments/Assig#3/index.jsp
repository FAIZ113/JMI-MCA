<!Doctype html>
<html>
<head>
    <title>J2EE Lab Assig#3 || Wasit Shafi 18MCA054</title>
    <link rel="stylesheet" href="main.css">
    <script type="text/javascript" src="script.js"></script>
</head>
<body onload="load_function()">
    <nav class="nav">
        <a href="#" onclick='visible_hide_login()'>Login</a>&nbsp;&nbsp;&nbsp;&nbsp;
        <a href="ShowResult.jsp">View Result</a>
    </nav>

    <div id="login-form-container">
        <form  method="Post" action="login.do" class="login-form">
            <table>
                <tr>
                    <td><label for="username">Enter Your Username : </label></td>
                    <td><input type="text" placeholder="username..." name="txtbUsername"></td>
                </tr>                
                <tr>
                    <td><label for="username">Enter Your Password : </label></td>
                    <td><input type="password" placeholder="Password..." name="txtbPassword"></td>
                </tr>
                <tr>
                    <td colspan="2" stylesheet="text-align:center"><input type="submit" value="Login"></td>
                </tr>
            </table>                        
        </form>
    </div>
</body>
</html>
