void button1_Click(object sender, EventArgs e)
{
    MessageBox.Show(
        "Выберите один из вариантов",
        "Сообщение",
        MessageBoxButtons.YesNo,
        MessageBoxIcon.Information,
        MessageBoxDefaultButton.Button1,
        MessageBoxOptions.DefaultDesktopOnly);
}