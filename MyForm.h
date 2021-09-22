#include "List.h";
#pragma once

namespace Lab32MoisesAlonso1187411 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		List* miList;
		List* milist2;

		MyForm(void)
		{
			InitializeComponent();
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;

			milist2 = new List();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtNumero;
	private: System::Windows::Forms::Button^ btnInsertStart;
	private: System::Windows::Forms::Button^ btnInsertEnd;
	private: System::Windows::Forms::Button^ btnInsertAt;
	private: System::Windows::Forms::TextBox^ txtInsertAt;
	private: System::Windows::Forms::TextBox^ txtExtractAt;
	private: System::Windows::Forms::Button^ ExtractAt;
	private: System::Windows::Forms::Button^ ExtractEnd;
	private: System::Windows::Forms::Button^ ExtractStart;
	private: System::Windows::Forms::Button^ Isempty;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ txtGetValue;
	private: System::Windows::Forms::Button^ GetValue;
	private: System::Windows::Forms::ListBox^ lstLista;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertStart = (gcnew System::Windows::Forms::Button());
			this->btnInsertEnd = (gcnew System::Windows::Forms::Button());
			this->btnInsertAt = (gcnew System::Windows::Forms::Button());
			this->txtInsertAt = (gcnew System::Windows::Forms::TextBox());
			this->txtExtractAt = (gcnew System::Windows::Forms::TextBox());
			this->ExtractAt = (gcnew System::Windows::Forms::Button());
			this->ExtractEnd = (gcnew System::Windows::Forms::Button());
			this->ExtractStart = (gcnew System::Windows::Forms::Button());
			this->Isempty = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtGetValue = (gcnew System::Windows::Forms::TextBox());
			this->GetValue = (gcnew System::Windows::Forms::Button());
			this->lstLista = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingresar un Número:";
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(135, 27);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(55, 20);
			this->txtNumero->TabIndex = 1;
			// 
			// btnInsertStart
			// 
			this->btnInsertStart->Location = System::Drawing::Point(15, 35);
			this->btnInsertStart->Name = L"btnInsertStart";
			this->btnInsertStart->Size = System::Drawing::Size(161, 23);
			this->btnInsertStart->TabIndex = 2;
			this->btnInsertStart->Text = L"Insertar al inicio";
			this->btnInsertStart->UseVisualStyleBackColor = true;
			this->btnInsertStart->Click += gcnew System::EventHandler(this, &MyForm::btnInsertStart_Click);
			// 
			// btnInsertEnd
			// 
			this->btnInsertEnd->Location = System::Drawing::Point(15, 64);
			this->btnInsertEnd->Name = L"btnInsertEnd";
			this->btnInsertEnd->Size = System::Drawing::Size(161, 23);
			this->btnInsertEnd->TabIndex = 3;
			this->btnInsertEnd->Text = L"Insertar al final";
			this->btnInsertEnd->UseVisualStyleBackColor = true;
			this->btnInsertEnd->Click += gcnew System::EventHandler(this, &MyForm::btnInsertEnd_Click);
			// 
			// btnInsertAt
			// 
			this->btnInsertAt->Location = System::Drawing::Point(15, 93);
			this->btnInsertAt->Name = L"btnInsertAt";
			this->btnInsertAt->Size = System::Drawing::Size(161, 23);
			this->btnInsertAt->TabIndex = 4;
			this->btnInsertAt->Text = L"Insertar en";
			this->btnInsertAt->UseVisualStyleBackColor = true;
			this->btnInsertAt->Click += gcnew System::EventHandler(this, &MyForm::btnInsertAt_Click);
			// 
			// txtInsertAt
			// 
			this->txtInsertAt->Location = System::Drawing::Point(182, 95);
			this->txtInsertAt->Name = L"txtInsertAt";
			this->txtInsertAt->Size = System::Drawing::Size(55, 20);
			this->txtInsertAt->TabIndex = 5;
			// 
			// txtExtractAt
			// 
			this->txtExtractAt->Location = System::Drawing::Point(182, 91);
			this->txtExtractAt->Name = L"txtExtractAt";
			this->txtExtractAt->Size = System::Drawing::Size(55, 20);
			this->txtExtractAt->TabIndex = 9;
			// 
			// ExtractAt
			// 
			this->ExtractAt->Location = System::Drawing::Point(15, 89);
			this->ExtractAt->Name = L"ExtractAt";
			this->ExtractAt->Size = System::Drawing::Size(161, 23);
			this->ExtractAt->TabIndex = 8;
			this->ExtractAt->Text = L"Extraer en";
			this->ExtractAt->UseVisualStyleBackColor = true;
			this->ExtractAt->Click += gcnew System::EventHandler(this, &MyForm::ExtractAt_Click);
			// 
			// ExtractEnd
			// 
			this->ExtractEnd->Location = System::Drawing::Point(15, 60);
			this->ExtractEnd->Name = L"ExtractEnd";
			this->ExtractEnd->Size = System::Drawing::Size(161, 23);
			this->ExtractEnd->TabIndex = 7;
			this->ExtractEnd->Text = L"Extraer al final";
			this->ExtractEnd->UseVisualStyleBackColor = true;
			this->ExtractEnd->Click += gcnew System::EventHandler(this, &MyForm::ExtractEnd_Click);
			// 
			// ExtractStart
			// 
			this->ExtractStart->Location = System::Drawing::Point(15, 31);
			this->ExtractStart->Name = L"ExtractStart";
			this->ExtractStart->Size = System::Drawing::Size(161, 23);
			this->ExtractStart->TabIndex = 6;
			this->ExtractStart->Text = L"Extraer al inicio";
			this->ExtractStart->UseVisualStyleBackColor = true;
			this->ExtractStart->Click += gcnew System::EventHandler(this, &MyForm::ExtractStart_Click);
			// 
			// Isempty
			// 
			this->Isempty->Location = System::Drawing::Point(15, 48);
			this->Isempty->Name = L"Isempty";
			this->Isempty->Size = System::Drawing::Size(161, 23);
			this->Isempty->TabIndex = 10;
			this->Isempty->Text = L"Está vacía";
			this->Isempty->UseVisualStyleBackColor = true;
			this->Isempty->Click += gcnew System::EventHandler(this, &MyForm::Isempty_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnInsertAt);
			this->groupBox1->Controls->Add(this->btnInsertStart);
			this->groupBox1->Controls->Add(this->btnInsertEnd);
			this->groupBox1->Controls->Add(this->txtInsertAt);
			this->groupBox1->Location = System::Drawing::Point(29, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(252, 142);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Operaciones de Inserción";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->ExtractAt);
			this->groupBox2->Controls->Add(this->ExtractStart);
			this->groupBox2->Controls->Add(this->ExtractEnd);
			this->groupBox2->Controls->Add(this->txtExtractAt);
			this->groupBox2->Location = System::Drawing::Point(29, 227);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(252, 138);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Operaciones de Extracción";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtGetValue);
			this->groupBox3->Controls->Add(this->GetValue);
			this->groupBox3->Controls->Add(this->Isempty);
			this->groupBox3->Location = System::Drawing::Point(29, 381);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(252, 85);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Operaciones de Búsqueda";
			// 
			// txtGetValue
			// 
			this->txtGetValue->Location = System::Drawing::Point(182, 21);
			this->txtGetValue->Name = L"txtGetValue";
			this->txtGetValue->Size = System::Drawing::Size(55, 20);
			this->txtGetValue->TabIndex = 10;
			// 
			// GetValue
			// 
			this->GetValue->Location = System::Drawing::Point(15, 19);
			this->GetValue->Name = L"GetValue";
			this->GetValue->Size = System::Drawing::Size(161, 23);
			this->GetValue->TabIndex = 11;
			this->GetValue->Text = L"Obtener Valor";
			this->GetValue->UseVisualStyleBackColor = true;
			this->GetValue->Click += gcnew System::EventHandler(this, &MyForm::GetValue_Click);
			// 
			// lstLista
			// 
			this->lstLista->FormattingEnabled = true;
			this->lstLista->Location = System::Drawing::Point(330, 27);
			this->lstLista->Name = L"lstLista";
			this->lstLista->Size = System::Drawing::Size(63, 446);
			this->lstLista->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 511);
			this->Controls->Add(this->lstLista);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void btnInsertStart_Click(System::Object^ sender, System::EventArgs^ e) {
		int value = Convert::ToInt32(txtNumero->Text);
		miList->InsertAtStart(value);
		LlenarListBox();
	}

		   void LlenarListBox() {
			   Node* temp = miList->start;
			   lstLista->Items->Clear();
			   while (temp != nullptr) {
				   lstLista->Items->Add(temp->value);
				   temp = temp->next;
			   }
		   }
private: System::Void btnInsertEnd_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Convert::ToInt32(txtNumero->Text);
	miList->InsertAtEnd(value);
	LlenarListBox();
}

private: System::Void btnInsertAt_Click(System::Object^ sender, System::EventArgs^ e) {
	int value = Convert::ToInt32(txtNumero->Text);
	int position = Convert::ToInt32(txtInsertAt->Text);
	miList->InsertAtPosition(value, position);
	LlenarListBox();
}


private: System::Void ExtractStart_Click(System::Object^ sender, System::EventArgs^ e) {
	Node* temp = miList->ExtractAtStart();
	if (temp)
		MessageBox::Show("El valor del nodo extraído es: " + temp->value, "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	else
		MessageBox::Show("La lista está vacía", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	LlenarListBox();
}


private: System::Void ExtractEnd_Click(System::Object^ sender, System::EventArgs^ e) {
	Node* temp = miList->ExtractAtEnd();
	if (temp)
		MessageBox::Show("El valor del nodo extraído es: " + temp->value, "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	else
		MessageBox::Show("La lista está vacía", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	LlenarListBox();
}


private: System::Void ExtractAt_Click(System::Object^ sender, System::EventArgs^ e) {
	int position = Convert::ToInt32(txtExtractAt->Text);
	Node* temp = miList->ExtractAtPosition(position);
	if (temp)
		MessageBox::Show("El valor del nodo extraído es: " + temp->value + " en la posición: " + position, "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	else
		MessageBox::Show("La lista está vacía", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	LlenarListBox();
}
private: System::Void GetValue_Click(System::Object^ sender, System::EventArgs^ e) {
	int position = Convert::ToInt32(txtGetValue->Text);
	int value = miList->GetValue(position);
	if (miList->isEmpty())
		MessageBox::Show("La lista está vacía", "Atención", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	else
		MessageBox::Show("El valor del nodo es: " + value + " en la posición: " + position, "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		

	LlenarListBox();
}


private: System::Void Isempty_Click(System::Object^ sender, System::EventArgs^ e) {
	if (miList->isEmpty()) 
		MessageBox::Show("La Lista está vacía", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
	else
		MessageBox::Show("La Lista no está vacía y posee: " + miList->count + " nodos", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
}
};
}
