<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Document</title>
    <style type="text/css">
        tr{
            height: 50px;
        }
    </style>
</head>
<body>
    <form action="" method="POST" name="reg" >
        <table border="2">
            <th colspan="3" align="left">1.姓名和联系方式</th>
            <tr>
                <td>真实姓名:</td>
                <td style="width:300px"><input type="text" style="width: 250px">*</td>
                <td style="width:400px"><input type="radio" name="sex" value="male" checked>女<input type="radio" name="sex" name="female" checked>男</td>
            </tr>
            <tr>
                <td>电子邮箱:</td>
                <td><input type="text" style="width: 250px">*</td>
                <td><b>非常重要!</b><br>这是本工作室与您联系的首选方式哦，请填写真实</td>
            </tr>
            <tr>
                <td>电话：</td>
                <td><input type="text" style="width: 250px">*</td>
                <td>电话为必须填写项</td>
            </tr>
            <tr>
                <td>所实习部门：</td>
                <td colspan="2">
                    <select name="department">
                        <option>易千工作室</option>
                        <option>研发</option>
                        <option>设计</option>
                        <option>运营</option>
                        <option>内容</option>
                    </select>
                </td>
            </tr>
            <tr>
                <td>实习岗位:</td>
                <td><input type="text" style="width: 250px">*</td>
                <td>研发岗位：前端/后端/运维</td>
            </tr>
            <tr>
                <td>手机号码：</td>
                <td><input type="text" style="width: 250px"></td>
            </tr>
            <tr>
                <td>邮箱：</td>
                <td><input type="text" style="width: 250px"></td>
            </tr>
            <tr>
                <td>性别取向：</td>
                <td><input type="text" style="width: 250px"></td>
            </tr>
        </table>
    </form>
</body>
</html>

