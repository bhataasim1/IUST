import javax.swing.*;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;

class Exam {
    private String subjectName;
    private String startDate;

    public Exam(String subjectName, String startDate) {
        this.subjectName = subjectName;
        this.startDate = startDate;
    }

    public String getSubjectName() {
        return subjectName;
    }

    public String getStartDate() {
        return startDate;
    }
}

class CenterBoldTableCellRenderer extends DefaultTableCellRenderer {
    public CenterBoldTableCellRenderer() {
        setHorizontalAlignment(SwingConstants.CENTER);
        setFont(getFont().deriveFont(Font.BOLD));
    }
}


public class DateSheetBuilder extends JFrame {
    private List<Exam> exams;
    private DefaultTableModel tableModel;
    private JTextField subjectNameField;
    private JTextField startDateField;
    private JTable table;

    public DateSheetBuilder() {
        exams = new ArrayList<>();
        setTitle("Datesheet Builder");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(800, 300);
        setLayout(new BorderLayout());

        JPanel inputPanel = new JPanel(new FlowLayout());
        JLabel subjectLabel = new JLabel("Subject Name:");
        JLabel startDateLabel = new JLabel("Start Date (DD-MM-YYYY):");
        subjectNameField = new JTextField(15);
        startDateField = new JTextField(15);
        JButton addButton = new JButton("Add Exam");
        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addExam();
            }
        });

        inputPanel.add(subjectLabel);
        inputPanel.add(subjectNameField);
        inputPanel.add(startDateLabel);
        inputPanel.add(startDateField);
        inputPanel.add(addButton);

        tableModel = new DefaultTableModel();
        tableModel.addColumn("Subject Name");
        tableModel.addColumn("Date");

        table = new JTable(tableModel);
        table.setDefaultRenderer(Object.class, new CenterBoldTableCellRenderer()); // Customize cell renderer
        
        add(inputPanel, BorderLayout.NORTH);
        add(new JScrollPane(table), BorderLayout.CENTER);

        setVisible(true);
    }

    private void addExam() {
        String subjectName = subjectNameField.getText();
        String startDate = startDateField.getText();

        if (!subjectName.isEmpty() && !startDate.isEmpty()) {
            exams.add(new Exam(subjectName, startDate));
            updateTable();
            subjectNameField.setText("");
            startDateField.setText("");
        }
    }

    private void updateTable() {
        tableModel.setRowCount(0); // Clear the table

        for (Exam exam : exams) {
            Object[] row = {exam.getSubjectName(), exam.getStartDate()};
            tableModel.addRow(row);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new DateSheetBuilder());
    }
}
