void resume(Graphics^ g) {
    g->Clear(Color::Black);

    System::Drawing::Font^ f = gcnew System::Drawing::Font("Calibri", 20);
    SolidBrush^ b = gcnew SolidBrush(Color::Blue);

    g->DrawString("FIN DEL JUEGO", f, b, 100, 200);

    delete f, b;
}
