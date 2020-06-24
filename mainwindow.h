#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <resultado.h>
#include <QInputDialog>
#include <QMainWindow>
#include <resultado.h>
#include <jogador.h>
#include <jogo.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Jogo* j;
private:
    void desabilitar(bool);
private slots:

    void on_btn_a_clicked();
    void on_btn_b_clicked();
    void on_btn_c_clicked();
    void on_btn_d_clicked();
    void on_btn_e_clicked();
    void on_btn_f_clicked();
    void on_btn_g_clicked();
    void on_btn_h_clicked();
    void on_btn_i_clicked();
    void on_btn_j_clicked();
    void on_btn_k_clicked();
    void on_btn_l_clicked();
    void on_btn_m_clicked();
    void on_btn_n_clicked();
    void on_btn_o_clicked();
    void on_btn_p_clicked();
    void on_btn_q_clicked();
    void on_btn_r_clicked();
    void on_btn_s_clicked();
    void on_btn_t_clicked();
    void on_btn_u_clicked();
    void on_btn_v_clicked();
    void on_btn_x_clicked();
    void on_btn_w_clicked();
    void on_btn_y_clicked();
    void on_btn_z_clicked();
    void on_btn_chutar_clicked();

    void on_btn_novo_clicked();

    void on_actionRECORD_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
