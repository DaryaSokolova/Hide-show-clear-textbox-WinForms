#pragma once

namespace Project21 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTask;
	protected:
	private: System::Windows::Forms::Button^ btnHide;
	private: System::Windows::Forms::Button^ btnShow;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtAnswer;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->lblTask = (gcnew System::Windows::Forms::Label());
			this->btnHide = (gcnew System::Windows::Forms::Button());
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtAnswer = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblTask
			// 
			this->lblTask->AutoSize = true;
			this->lblTask->BackColor = System::Drawing::SystemColors::Control;
			this->lblTask->Location = System::Drawing::Point(24, 25);
			this->lblTask->Name = L"lblTask";
			this->lblTask->Size = System::Drawing::Size(402, 65);
			this->lblTask->TabIndex = 0;
			this->lblTask->Text = resources->GetString(L"lblTask.Text");
			// 
			// btnHide
			// 
			this->btnHide->Location = System::Drawing::Point(119, 187);
			this->btnHide->Name = L"btnHide";
			this->btnHide->Size = System::Drawing::Size(75, 23);
			this->btnHide->TabIndex = 1;
			this->btnHide->Text = L"Скрыть";
			this->btnHide->UseVisualStyleBackColor = true;
			this->btnHide->Click += gcnew System::EventHandler(this, &MyForm::btnHide_Click);
			// 
			// btnShow
			// 
			this->btnShow->Location = System::Drawing::Point(219, 187);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(75, 23);
			this->btnShow->TabIndex = 2;
			this->btnShow->Text = L"Показать";
			this->btnShow->UseVisualStyleBackColor = true;
			this->btnShow->Click += gcnew System::EventHandler(this, &MyForm::btnShow_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(315, 187);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(119, 146);
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(271, 20);
			this->txtAnswer->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(521, 278);
			this->Controls->Add(this->txtAnswer);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnShow);
			this->Controls->Add(this->btnHide);
			this->Controls->Add(this->lblTask);
			this->Name = L"MyForm";
			this->Text = L"Упражнение 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnHide_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (txtAnswer->Visible != false)
		{
			txtAnswer->Visible = false;
		}
		else
		{
			MessageBox::Show("Уже скрыто");
		}
	}

	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (txtAnswer->Visible != true)
		{
			txtAnswer->Visible = true;
		}
		else
		{
			MessageBox::Show("Уже показано");
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (txtAnswer->Text != "")
		{
			txtAnswer->Text = "";
		}
		else
		{
			MessageBox::Show("Уже пустое");
		}
	}
};
}