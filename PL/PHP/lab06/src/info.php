<html>
    <style>
        th, td {
            padding: 10px;
        }
        th{
            background: #606060;
            color: #fff;
        }

        td{
            background: #b5b5b5;
        }
    </style>
    <body>
        <table>
            <tr>
                <th>ID</th>
                <th>Name</th>
                <th>Password</th>
                <th>Priority</th>
            </tr>
            

            <?php
            include_once "connect.php";
            $users = mysqli_query($connect, "SELECT * FROM `users`");
            $users = mysqli_fetch_all($users);
            foreach ($users as $user){
                ?>
                <tr>
                    <td><?= $user[0] ?></td>
                    <td><?= $user[1] ?></td>
                    <td><?= $user[2] ?></td>
                    <td><?= $user[3] ?></td>
                    <td><a href="delete.php?id=<?=$user[0]?>">Delete</a></td>
                </tr>
            <?php
            } 
            ?>
            



        </table>
    </body>
</html>



<form action="index.php">
    <button>Main</button>
</form>